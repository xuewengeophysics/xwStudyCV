# 环境安装

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

# Linux

ps aux | grep -i 文件名<br>



# IDE

vscode远程连接服务器的教程 https://zhuanlan.zhihu.com/p/105707830<br>



# git

## github上fork了别人的项目再同步更新别人的提交

+ 参考资料：https://blog.csdn.net/qq1332479771/article/details/56087333?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.control&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.control

```shell
git remote -v 
git remote add upstream git@github.com:xxx/xxx.git
git fetch upstream
git merge upstream/master
git push 
```





[pip安装第三方包报错：There was a problem confirming the ssl certificate](https://www.cnblogs.com/yinhaiping/p/13375375.html)

**创建pip配置pip.ini**

（1）在系统目录C:\Users\用户\AppData\Roaming新建pip文件夹；

（2）在pip文件夹下新建pip.ini文件，并写入如下配置：

```python
[global]
index-url = http://mirrors.aliyun.com/pypi/simple/
[install]
trusted-host = mirrors.aliyun.com
```