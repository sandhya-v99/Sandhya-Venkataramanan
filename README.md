# wireless-relay-control-using-bluetooth
The working of this project is based on the functioning of the relay and the ability.
By interfacing Arduino with 5V relay module, we intend to operate an AC load like lamp
Instead of using it directly ,we designed a small application where an LDR is used to detect the light intensity and automatically 
turn on or off the relay,Under normal lightning conditions ,the output from the LDR will be in the range of 80-90(range is 0-255).
When the lightning conditions go dark ,the output from the LDR will jump to 130-140.
This condition can be used to trigger the 5V Relay and turn on the light.
