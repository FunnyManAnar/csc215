# **9# Register Usage In the 8080**

# Register Addresses


![](/Screenshot%202024-10-22%20at%207.35.05%20AM.png)

# The M register
is not really a register as it's not a space in the CPU but rather in memory that is pointed to by the HL registers and is used like a register. Since there is more space for M "registers" in memory than there are in the CPU it's useful in scenarios where you may need to keep track of more indexes than the normal register amount is capable of. Another nice this that allows for this program is how the contents of the M register doesn't require loading into the Acummulator to do arithmetic or logical operation on your indexes. 

The M register may be hard to use as a memory address like 6C<sub>16</sub> isn't the easiest thing to remember while coding when compared to something called **THE B REGISTER** that is much easier to refer to.

