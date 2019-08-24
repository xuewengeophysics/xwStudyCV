import numpy as np

# segmentation
def substract_empty_image(image_cow, empty_image, threshold):
    image_dif = image_cow - empty_image
    image_dif = np.absolute(image_dif)
    img = np.where(image_dif<=threshold, 0, image_cow)  # 满足条件的区域输出x，不满足输出y，后来仅保留了cow的深度图;
    return img.astype(dtype=np.uint8)  # 无符号整数(0 to 255)

def post_delete_pixels_out_regular_distances(image, max_height):
    min_pixel_value = (((2.8 - max_height) * 1000.0) / 4500.0) * 255  # 有效测距是2.8m，阈值是1.8m
    img = np.where(image<min_pixel_value, 0, image)
    return img.astype(dtype=np.uint8)

# Depth values were rescaled from 0 to 255
def scaling_depth(image):
    min = 0
    if image[image>0].size:
        min = np.min(image[image > 0])
    max = np.max(image)
    img = image.astype(dtype=np.float64)
    img = np.where(img == 0, 0, (img - min) / (max - min) * 255)
    return img.astype(dtype=np.uint8)

def delete_background(image_cow, empty_image):
    img = substract_empty_image(image_cow, empty_image, threshold = 2)
    img = post_delete_pixels_out_regular_distances(img, max_height = 1.8)
    img = scaling_depth(img)
    return img.astype(dtype=np.uint8)
    
