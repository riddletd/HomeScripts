#include <stdio.h>
#include <stdlib.h>


/*
 * A shell script written in C, because I want to grab a cmdline
 * argument. This script will be used to initialize a git repository
 * and add all directories and files automatically to a new
 * repository.
 *
 * Update: Now creates the repo for you.
 *
 * @cmdline args:
 *    argv[0]: <gitinit path>
 *    argv[1]: <Name of Repo>
 * 
 * Author: Trevor Riddle
 * Creation Date: May 30, 2017
 * Update: May 30, 2017 7:03pm
 */
int main(int argc, char ** argv) {
  char buf[100];
  char buf1[100];
  char buf2[100];

  snprintf(buf2, 100, "curl -u riddletd https://api.github.com/user/repos -d \'{ \"name\": \"%s\" }\'", argv[1]);
  system(buf2);
  
  snprintf(buf, 100, "echo \"# %s\" >> README.md", argv[1]);
  system(buf);
  
  system("git init");
  system("git add README.md");
  system("git commit -m \"first commit\"");
  
  snprintf(buf1, 100, "git remote add origin https://github.com/riddletd/%s.git", argv[1]);
  system(buf1);
  
  system("git push -u origin master");

  /* Same as git.sh in Bash/ */
  system("gitput");
  system("rm *~");
  system("rm *#");
  system("git add *");
  system("git commit -m \"Update: `date +'%Y-%m-%d %H:%M:%S'`\"");
  system("git push");
}
