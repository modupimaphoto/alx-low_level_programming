# 0x1C. C - Makefiles

## General

- What are make, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

Make is a build automation tool that is used to manage the build process of software projects. It automatically determines which parts of a project need to be rebuilt and issues the necessary commands to rebuild them. Make uses a file called a Makefile to define the rules and dependencies for building a project.

A Makefile is a simple text file that contains a set of rules, dependencies, and commands. It specifies how the source code files are translated into executable programs or libraries. Makefiles are widely used in software development to streamline the build process and ensure that only the necessary components are rebuilt when changes are made.

Here are some key concepts related to Makefiles:

1. **Rules:** Rules define how to build a target file from a set of prerequisites. A rule consists of a target, prerequisites, and a set of commands. The target is the file that needs to be built, and the prerequisites are the files or other targets that are required for building the target.

   ```make
   target: prerequisites
       commands
   ```

2. **Explicit and Implicit Rules:**
   - **Explicit Rules:** These are rules that explicitly define how to build a target. They specify the target, prerequisites, and commands.
   
     ```make
     program: main.c functions.c
         gcc -o program main.c functions.c
     ```

   - **Implicit Rules:** These are rules that Make uses by default to build certain types of files. For example, Make may have implicit rules for compiling C source files into object files.

     ```make
     %.o: %.c
         gcc -c $< -o $@
     ```

3. **Common/Useful Rules:**
   - **all:** This rule is often used as the default target and builds the entire project.
   - **clean:** This rule is used to remove generated files and restore the project to a clean state.
   - **install:** Installs the built software or libraries to the system.

4. **Variables:**
   Variables in Makefiles are used to store values that can be reused throughout the file. They are defined using the syntax `variable_name = value` or `variable_name := value`. Variables can be used to make Makefiles more flexible and easier to maintain.

   ```make
   CC = gcc
   CFLAGS = -Wall -O2

   program: main.c functions.c
       $(CC) $(CFLAGS) -o program main.c functions.c
   ```

   Here, `CC` is a variable for the compiler, and `CFLAGS` is a variable for compiler flags.

In summary, Make and Makefiles are essential tools in software development for automating the build process. They help manage dependencies, streamline compilation, and ensure that only the necessary components are rebuilt when changes occur. Rules, both explicit and implicit, define how targets are built, and variables provide a way to make Makefiles more flexible and maintainable.

