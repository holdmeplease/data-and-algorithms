# 数据与算法

关于《数据与算法》的算法解法以及思考

## 快速上手

### 请注意

请在题目截止提交时间的**10天**后提交pull request。

### 上传

1. Fork本仓库为自己的仓库。

1. Clone自己的仓库到本地。将%及其包围的字符串改为自己的用户名。

    ``` shell
    git clone https://github.com/%YOUR USERNAME%/data-and-algorithms.git
    cd data-and-algorithms
    ```

1. 认真阅读此README中的[要求](#要求)部分。

1. 在对应问题下创建以自己姓名命名的文件夹，将源代码、截图和README.md放入文件夹。将%及其包围的字符串改为题目名称和自己的姓名。

    ``` shell
    git add .
    git commit -m "Initial commit to %PROBLEM NAME% by %YOUR NAME%"
    git push
    ```

1. 提交pull request，pull request的标题为`Initial commit to %PROBLEM NAME% by %YOUR NAME%`。将%及其包围的字符串改为题目名称和自己的姓名。

1. 关注pull request的状态，如果不通过需要继续修改再提交。

### 更新仓库再上传

当此仓库比自己的仓库更新时，需要先将自己fork的仓库更新，再上传。

1. 添加本仓库为远程库并更新本地仓库。

    ``` shell
    git remote add ee64 https://github.com/ee64/data-and-algorithms.git
    git pull ee64 master
    ```

1. 从上传步骤3继续。

## 简介

这个repo是由清华大学电子工程系无64班同学发起的活动的一部分。这个活动旨在促进同学们学习前沿的技术，从而为以后的发展打下良好的基础。

数据与算法是电子系的核心课程之一。它对于软件开发的重要性不言而喻。作为整个活动的第一个也是最重要的一部分，这个repo将会帮助同学们增强自己的代码能力。通过学习他人的代码，评价并且交流，同学们能够取长补短。

## 目标

- 我们希望在维护这个repo的过程中能够达到一定的目标。

- 学会如何使用Git和Github进行代码版本管理和协作开发

- 学会如何使用Markdown写出清晰易读的文档和说明

- 通过阅读他人的代码来提高自己的算法能力和改善代码风格

## 要求

请在pull request之前，仔细阅读下面的文字，确保你已经满足了所有的要求。

### 代码

- 在代码中关键的部位写清注释。不要为了写注释而写注释，注释一定要有效而不滥。注释中英均可，推荐使用英文以避免编码问题。

- 将你的代码合适地排版。可以通过直接剪切所有代码再粘贴的方法在Visual Studio中全局格式化代码。下面的代码所有符号都黏在一起，是不被接受的。

  ``` C++
    for(int i=0;i<n&&j<m&&(a+b==3);++i)
  ```

- 请特别注意文件的编码。使用合适的代码编辑器，如VS Code，Sublime，Atom，或者Notepad++，确保你的文件编码为UTF-8（注：Windows自带的记事本默认编码不是UTF-8，会导致上传的文件乱码）。建议使用[VS Code](https://code.visualstudio.com/)，因为VS Code自带Markdown预览功能，方便测试`README.md`的语法正确。

### README

- 除了源文件，你还需要上传一个说明文件，建议中文。

- 这个文件需要被命名为`README.md`，这意味着你需要使用Markdown标记来写一个格式清楚、清晰易读的解释文档。

- 具体的内容没有任何限制。你想说什么就可以写什么。但是推荐包含以下几点。

  - 关于这个问题的总体思路

  - 你使用的算法以及你进行了哪些优化

  - 在写代码的时候你碰到了哪些问题，需要特别注意哪些地方

  - 什么都可以写，真的

- 在整个README的开头附上你的包含了时间和空间消耗的截图。

### 提交更改和推送请求

- 在提交更改时，请按照下面的格式写清commit的信息。建议使用英文，避免出现编码问题，英文在Github的commit上显示也更好。

  ``` text
  Done something to/in/from Problem by Name
  名字 题目 做了什么

  例:
  0. Initial commit to Fibonacci by Robert
     应睿向Fibonacci问题第一次提交了代码
  1. Add README to Fibonacci by Robert
     应睿向Fibonacci问题添加了README
  2. Fix a NULL pointer bug in Fibonacci by Robert
     应睿在Fibonacci问题中修复了一个空指针的bug
  3. Remove a nonsense sentence from Fibonacci by Robert
     应睿从Fibonacci问题中删除了一个没意义的句子
  4. Edit some comments in Fibonacci by Robert
     应睿在Fibonacci问题中修改了几行注释
  ```

- 直接使用你的commit的消息作为pull request的标题。如果需要补充信息，就写在Write那个窗格里面。在pull request之前，确保你已经通过fetch或者pull和主分支保持一致。

### 问题讨论

- 如果对别人的算法有疑惑，或者自己在写代码中遇到了问题，就直接开一个issue吧，没有任何限制。最好能够学会将特定的commit或pull request引用到issue以方便大家定位问题。

## 致谢

感谢所有无64班的同学以及其他参与了贡献的同志们。
