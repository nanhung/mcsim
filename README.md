# mcsim
The tutorial of using MCSim

# Using GNU MCSim in web-based IDE and combine with version control 
> Publish: Apr. 14, 2017

---

Web-based integrated development environment (IDE) can let us manage code and develop model every time and in everywhere. Version control has become the essential tool to track our projects and collaborate with other people as well. They allow us edit and backup our scripts and easy collaboration on complex projects. In this section, we use GNU MCSim in the Cloud9 online code editor and combine with GitHub version control system to improve the efficiency in model development.

---

# 1. Get the account in GitHub and Cloud9
- Create GitHub account ([https://github.com/](https://github.com/))
- Use GitHub account to sign in Cloud9 (https://c9.io/)

---

# 2. Create the repository 
- Name the repository and check *Create repository*

![](https://i.imgur.com/QROjfHD.png)

- Copy the site of repository

![](https://i.imgur.com/uRtnaeO.png)

---

# 3. Create the new workspace in Cloud9
- Name the repository
- Paste the URL of repository from GitHub
- Choose a template (we use blank in this case, which has already includes the basic Ubuntu installation)


![](https://i.imgur.com/X0gV4Gg.png)

---

# 4. Install MCSim in the Cloud9 IDE

Now, we are in the Cloud 9 IDE interface. We’ll use terminal to do the following work:

![](https://i.imgur.com/tzst5w9.png)


 - Download the latest version of MCSim in our workspace from the main GNU server 
```
$ wget http://ftp.gnu.org/gnu/mcsim/mcsim-5.6.6.tar.gz
```

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187738329_file.png)

 - Extract the file
```
$ tar -xzvf mcsim-5.6.6.tar.gz
```

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187746848_file.png)

- Use *pwd* to check our working directory. In this case, we want to install MCSim in the */home/ubuntu*

```
$ pwd
```

- Since we don’t have the access rights in Cloud9, we need to use *./configure --prefix=/home/ubuntu* to install MCSim

```
$ ./configure --prefix=/home/ubuntu
```

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187758528_file.png)

- Compile the package

```
$  make
```

![](https://i.imgur.com/csuwjZt.png)

- Run self-tests

```
$ make check
```

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187776614_file.png)

```
$ make install
```

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187783626_file.png)

---

# 5. Test MCSim
- Make sure we have installed the MCSim, successfully. Check the directory, and we’ll find the *bin*, *include*, *lib*, and *share* folders have been added. 
- To test run the MCsim we need to compile the model file first. We also need to use command *makemcsims* to create the standalone model.

```
$ makemcsims perc.model
```

- Use the compiled program to run the input file. We can get the output file in the current directory.

```
$ ./mcsim.perc perc.lsodes.in
```

![](https://i.imgur.com/5oWRdbw.png)

---

# 6. Apply git version control 
- Check the current status and untracked files

```
$ git status
```


- Track the new files and revised files  

```
$ git add .
```

- Enter our commit message to help us remember what we were done in this period 

```
$ git commit -m “Install MCSim”
```

- Push our commit to GitHub

```
$ git push
```
 
![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187806597_file.png)


 
- Check GitHub repository. We’ll see our latest commit
 

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492192802246_file.png)

---

# 7. By Using this method, we can…

- Edit and develop our MCSim's model in the Cloud9 IDE,

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187868877_file.png)


- Check output result,

![](https://d2mxuefqeaa7sj.cloudfront.net/s_4E615E25DF123BA26B5E5BF98A09B0870890A8A44F2D14747238ACAED0138029_1492187875143_file.png)

-  Furthermore, we can track our code and model history in our GitHub repository!

