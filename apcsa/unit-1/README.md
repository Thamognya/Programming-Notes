# Welcome  to AP CSA

Some brief info about the exam.

# Hello World

```java
public class HelloWorld { // boiler plate
    public static void main(String[] args) { // boilerplate
        /*
        These are comments to help describe the code
        */
        System.out.println("Hello World"); // with new line because of println
        System.out.print("Same Line: ");
        System.out.print("Hello");
        System.out.println("Hello new line");
    }
}
```

# IDE and Java

gives an syntax highlighting and autocomplete. They reccomend Intellij Idea

That is stupid just use neovim with lsp and that is good. you can get info from UniverseVim

for gentoo to install java it is a pain

```console
doas emerge -a dev-java/openjdk
doas emerge --ask --oneshot virtual/jdk
doas emerge --ask --oneshot virtual/jre
```
after that is done you are ready to fall into depression from using java

