# Notes

### 10901

#### The trickiest problem ever coded! Lots of conditions to take into account!

Add this one to favorite :)

1. The problem statement asked for the answer to be _in the same order as the input_! The third case in the `in.txt` tests this requirement!
2. The `.front()` seems unable to change the value of the member of the structure.
3. `now = now > l.front().time ? now : l.front().time;` This time updating equation is pretty tricky!
4. When discussing cases, you really need to think of EVERY POSSIBILITY before coding! You need to consider the `ferry position L/R` and `<= or > current time`
5. You need to wait for the car to show up in order to take action!
