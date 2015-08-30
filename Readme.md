# My UVa Online Judge Submission Code and thoughts

Just like the Codeforces repository, I will try to organize my code in a way that
it'll be easy to search and review.

# Sidenotes
#### Setting up a folder using ```git init```

If you only add new folders but no new files such as Readme.md,  ```git add```
and ```git commit``` won't work. It will throw error messages:

```
error: src refspec master does not match any.  
error: failed to push some refs to 'ssh://xxxxx.com/project.git'"
```

You can check using ```git status``` and  ```git branch```,
 you will see no branch at all!

 # Notes

 * GCD
 ```
long long int gcd(long long int a, long long int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
 ```

* Leap year
```
year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)
```
