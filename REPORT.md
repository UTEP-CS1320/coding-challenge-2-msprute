##### Name: Michael Sprute
##### Date: October 1, 2020

### CODING CHALLENGE #2: REPORT

At long last, my code has passed all tests. The biggest issue I faced in this challenge was translating the chart directly into code. What I didn't realize was that I needed not just the (>) and (<) symbols in the chart but also the (<=) and (>=) symbols and finding out the combination is what was difficult.

Overall, I believe I was able to reduce the amount of if-statements to a good amount. I have one if-statement which first checks if the diastolic pressure value is less than the systolic pressure value. If that is the case, it will immediately print the "ERROR" message. Nested in that first if-statement, I have just 5 if-statements; one for every case. I was able to combine mutltiple comparison operators with (&&) and (||) symbols in every if statement to reduce the amount of if-statements overall and to not have so many nested statements. In total, I have just 6 if/else-if statements in my code which I believe to be good and I can't really think of a specific way to reduce that number. I believe there would have to be at least 5 if-statements to account for every specific case so maybe one could get rid of the if-statement that mine are nested in, however, that is the one that checks if (s > d) and if not, produces the "ERROR" message.

If there really is a way to reduce the number of if-statements even more, I'd be really interested to know. I know high level code can be heavily condensed, however, I don't know if that applies to if-statements. I found this project fun although coding on Github is a lot more confusing than zyBooks. There were times I thought I couldn't finish this code but in the end, my code passed all tests and I saw the unicorns and gems.
