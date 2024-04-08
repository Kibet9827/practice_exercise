#!/usr/bin/env python

import cmd

class MyConsole(cmd.Cmd):
    """my console example"""

    def do_greet(self, person):
        """greet [person]
        Greet the named person"""
        if person:
            print("hello ", person)
        else:
            print("hello")

    def help_greet(self):
        print('\n'.join([
            "greet [person]"
        ]))

    def do_EOF(self, person):
        """exit the process"""
        return True
    
    def do_quit(self, person):
        """exits the process"""
        return True
    def postloop(self):
        print()

if __name__ == '__main__':
    MyConsole().cmdloop() #to catch the user in a loop