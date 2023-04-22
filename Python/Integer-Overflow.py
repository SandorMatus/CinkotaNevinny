#!/usr/bin/python3
import sys, re, pexpect

terminal = pexpect.spawn("/bin/bash", encoding='utf-8')
terminal.logfile = sys.stdout

terminal.sendline("../C/test")
terminal.expect("Enter password:")
terminal.sendline("IC1Project")
terminal.expect("3 - Exit the program.")

terminal.sendline("1")
terminal.expect("How much you want to loan ?")

terminal.sendline("-7000")
terminal.expect("5 - Exit the program.")
terminal.sendline("5")
print("Overflowing Unsigned Int resolved in Debt decreasing from 50000 to 1000")
