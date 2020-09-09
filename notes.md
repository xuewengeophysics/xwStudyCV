pycocotools: pip install git+https://github.com/philferriere/cocoapi.git#subdirectory=PythonAPI<br>
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/<br>
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/<br>
conda config --set show_channel_urls yes<br>
pip install -i https://pypi.tuna.tsinghua.edu.cn/simple pip -U<br>
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple<br>
pip config set global.index-url https://pypi.douban.com/simple/
conda env create -f env_info_file.yml<br>
pip install torch==1.3.1+cu100 torchvision==0.4.2+cu100 -f https://download.pytorch.org/whl/torch_stable.html<br>
conda search pytorch
conda search pytorch | grep 100
conda install pytorch=1.3.1=cuda100py36h53c1284_0
