pycocotools: pip install git+https://github.com/philferriere/cocoapi.git#subdirectory=PythonAPI<br>
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/<br>
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/<br>
conda config --set show_channel_urls yes<br>
pip install -i https://pypi.tuna.tsinghua.edu.cn/simple pip -U<br>
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple<br>
pip config set global.index-url https://pypi.douban.com/simple/<br>
conda env create -f env_info_file.yml<br>
pip install torch==1.3.1+cu100 torchvision==0.4.2+cu100 -f https://download.pytorch.org/whl/torch_stable.html<br>
conda search pytorch<br>
conda search pytorch | grep 100<br>
conda install pytorch=1.3.1=cuda100py36h53c1284_0<br>
ps aux | grep -i 文件名<br>
import ipdb;ipdb.set_trace()<br>
