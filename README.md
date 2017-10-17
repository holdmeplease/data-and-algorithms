# Data and Algorithms 数据与算法

Solutions and thoughts of Data and Algorithms

关于《数据与算法》的算法解法以及思考

## Introduction 简介

This is part of a project started by students from Class 64 of Department of Electronic Engineering, Tsinghua University.The project's aim is to enable students to learn cutting-edge techniques and prepare for the future's job.

这个repo是由清华大学电子工程系无64班同学发起的活动的一部分。这个活动旨在促进同学们学习前沿的技术，从而为以后的发展打下良好的基础。

Data and Algorithms is one of the core courses in E.E., which constitutes the basis of software development. As the first and the most important part of the project, this repository will help students to enhance their ability in coding by sharing code and their thoughts towards certain algorithm problems, as well as by reviewing and making comments on others' work.

数据与算法是电子系的核心课程之一。它对于软件开发的重要性不言而喻。作为整个活动的第一个也是最重要的一部分，这个repo将会帮助同学们增强自己的代码能力。通过学习他人的代码，评价并且交流，同学们能够取长补短。

## Aims 目标

We hope to make some achievements by maintaining this repository.

我们希望在维护这个repo的过程中能够达到一定的目标。

- Learn how to use Git and Github to do version control and collaborative development

  学会如何使用Git和Github进行代码版本管理和协作开发

- Learn how to write clear documentations or README using Markdown

  学会如何使用Markdown写出清晰易读的文档和说明

- Improve coding both in algorithms and styles by reviewing and commenting on others' work

  通过阅读他人的代码来提高自己的算法能力和改善代码风格

## Requirements 要求

Before pulling any request, please read carefully what is written below. Make sure you have met all the requirements.

请在pull request之前，仔细阅读下面的文字，确保你已经满足了所有的要求。

### Code 代码

- Proper comments at the key point of your code. DO NOT write meaningless comments such as `//This is a equals b`. Make sure your comments are succinct and to the point.

  在代码中关键的部位写清注释。不要为了写注释而写注释，注释一定要有效而不滥。注释中英均可，推荐使用英文以避免编码问题。

- Format your code. Use Visual Studio or any other editor to format your code so others won't get crazy when reading yours. Something like this is NOT acceptable.

  将你的代码合适地排版。可以通过直接剪切所有代码再粘贴的方法在Visual Studio中全局格式化代码。下面的代码所有符号都黏在一起，是不被接受的。

  ``` C++
    for(int i=0;i<n&&j<m&&(a+b==3);++i)
  ```

### README 说明

- You need to provide an explanatory documentation along with the code source file.

  除了源文件，你还需要上传一个说明文件，建议中文。

- The file need to be named as `README.md`, which means you need to write it with Markdown and make it fairly readable and clear.

  这个文件需要被命名为`README.md`，这意味着你需要使用Markdown标记来写一个格式清楚、清晰易读的解释文档。

- The content is not specifically fixed. You could write anything you would like to share, though some points may be appreciated.

  具体的内容没有任何限制。你想说什么就可以写什么。但是推荐包含以下几点。

  - General thoughts about the problem
    
    关于这个问题的总体思路

  - New methods you are proud of or the optimization you apply
  
    你使用的算法以及你进行了哪些优化

  - Places where we need to be careful or some wonderful bug you have been working on for days
    
    在写代码的时候你碰到了哪些问题，需要特别注意哪些地方

  - Anything is welcomed here!
    
    什么都可以写，真的

- Attach the screenshot of your time and memory consumption before all the texts.

  在整个README的开头附上你的包含了时间和空间消耗的截图。

### Commit and pull request 提交更改和推送请求

- Commit your changes with proper messages in the format below.
  
  在提交更改时，请按照下面的格式写清commit的信息。建议使用英文，避免出现编码问题，英文在Github的commit上显示也更好。

  ``` text
  Done something to/in/from Problem by Name
  名字 题目 做了什么

  Examples:
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

- Open a pull request with the same name as the commit message. If you want to add some detail too, just leave a comment. Make sure you fetch or pull the latest master branch before a commit or a pull request.
 
  直接使用你的commit的消息作为pull request的标题。如果需要补充信息，就写在Write那个窗格里面。在pull request之前，确保你已经通过fetch或者pull和主分支保持一致。

### Issues 问题讨论

- If you have any problem or want to share something, just open an issue in Issues.

  如果对别人的算法有疑惑，或者自己在写代码中遇到了问题，就直接开一个issue吧，没有任何限制。最好能够学会将特定的commit或pull request引用到issue以方便大家定位问题。

## Credit 致谢

All students from Class 64 and any other who ever contributes.

感谢所有无64班的同学以及其他参与了贡献的同志们。