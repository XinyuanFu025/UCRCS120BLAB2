# Test file for "Cart"


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 10, PINB: 20, PINC:30  => PORTD:240 "
# Set inputs
setPINA 10
setPINB 20
setPINC 30
# Continue for several ticks
continue 5
# Set expect values
expectPORTD 240
# Check pass/fail
checkResult

# Add tests below
test "PINA: 50, PINB: 50, PINC: 50, => PORTD: 0x59"
setPINA 50
setPINB 50
setPINC 50
continue 5
expectPORTD 0x59
checkResult
test "PINA: 1, PINB: 5, PINC: 100, => PORTD: 0xAA"
setPINA 1
setPINB 5
setPINC 100
continue 5
expectPORTD 0xAA
checkResult

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
