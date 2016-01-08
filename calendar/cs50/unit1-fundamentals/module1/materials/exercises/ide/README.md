##### Module 1

[Go back to Class 1 Prep](../../class1-prep#getting-set-up)

# Exercise: Logging into the IDE

#### Getting Started
Recall that CS50 IDE is a web-based "integrated development environment" that allows you to program "in the cloud," without installing any software locally. Underneath the hood is a popular operating system, Ubuntu Linux, that’s been "containerized" with open-source software called Docker, that allows multiple users (like you!) to share the operating system’s "kernel" (its nucleus, so to speak) and files, even while having files of their own. Indeed, CS50 IDE provides you with your very own "workspace" (i.e., storage space) in which you can save your own files and folders (aka directories). Anyhow, more on all that another time!

#### Logging In
Head to cs50.io and log into CS50 IDE by using your edX username and password. Upon logging in for the very first time, you should be informed that CS50 IDE (aka Cloud9, the software that underlies CS50 IDE) is "creating your workspace" and "creating your container," which might take a moment. (If you already have an account at c9.io, which is Cloud9’s own site, drop sysadmins@cs50.harvard.edu a note, and they will let you know how to "link" that account.)

Once you see your workspace, which should resemble David Malan's from Week 1, close any tabs that might have been opened for you by default (e.g., Welcome and README.md). Then decide which "theme" you’d like. By default, CS50 IDE is configured with a theme called "Cloud9 Day." If you’d prefer a darker theme, particularly at night, visit Support > Welcome Page, which should open a Welcome tab, and then, within that tab, change Main Theme to Cloud9 Classic Dark Theme, and then close the tab. Feel free to poke around other menus as well to get a sense of CS50 IDE’s user interface (UI). No worries if you’re not sure what most of the menus do (yet!). If among those more comfortable or just curious, feel free to uncheck View > Less Comfortable, which will reveal even more options.

#### Updating
Toward the bottom of CS50 IDE’s UI is a "terminal window" (in a tab called Terminal), a command-line interface (CLI) that allows you to explore your workspace’s files and directories, compile code, run programs, and even install new software. You should find that its "prompt" looks like

username@ide50:~/workspace $
where username is your own (automatically assigned) username. Click inside of that terminal window and then type
```
update50
```
followed by Enter to ensure that your workspace is up-to-date. It should take just a few moments for any updates to complete. (Be sure not to close the tab or CS50 IDE itself until they do!)

#### Done!

Now you should be all set. The next few exercises will help you set up your workspace and write some code!
