# Location-Sensitive Visual Recognition with Cross-IOU Loss笔记

+ Paper: [Location-Sensitive Visual Recognition with Cross-IOU Loss](https://arxiv.org/abs/2104.04899)
+ Code: [Duankaiwen/LSNet](https://github.com/Duankaiwen/LSNet)

## 0.Summary Keywords

+ unified framework (not multi-task unified model)
+ without using the heatmaps

## 1. Introduction

### 1.1 Why

the bounding boxes locate objects
simply and efficiently but lack the details  

masks and
keypoints reflect the shape and pose of the objects but usually need the bounding boxes to locate object firstly  

### 1.2 what

+ LSNet (unifies three location-sensitive visual recognition tasks)
+ cross-IOU loss (is friendly to receiving supervision from multiple scale)
+ a pyramid of deformable convolution (extracts discriminative visual cues around the landmarks)

### 1.3 How

### 1.4 Contributions

+ First, we present the formulation of location-sensitive visual recognition that inspires the community to consider the common property of these tasks
+ Second, we propose the LSNet as a unified framework in which the key technical contribution is the cross-IOU loss





## 参考资料

1. [CVPR 2021 | Anchor-free新玩法！LSNet：统一目标检测，实例分割，姿态估计三种任务](https://blog.csdn.net/amusi1994/article/details/116280495)