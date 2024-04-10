#!/usr/bin/env python

import cmd

class UserManagement(cmd.Cmd):
    """User management console  following CRUD"""

prompt = "hbnb- "


def do_create(self, line):
    """create a new user will include the users id  and the users name"""
    args = line.split()
    if len(args) == 2:
        print("valid input")
    else:
        print("invalid input")


if __name__ == "main":
    UserManagement().cmdloop()