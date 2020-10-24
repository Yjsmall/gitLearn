# 环境变量配置
## NODE
nvim /etc/profile
### 环境变量配置
> export NODE_HOME=[下载的路径]
> export NODE_HOME=/home/用户名/code/environment/文件命
> export PATH=$NODE_HOME/bin:$PATH
1. 修改之后，需要刷新才可以生效
> source /etc/profile
2. 镜像文件---快速下载
> npm config set registry https://registry.npm.taobao.org
