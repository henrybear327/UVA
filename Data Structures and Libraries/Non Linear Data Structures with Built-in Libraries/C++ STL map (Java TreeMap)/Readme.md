# Notes

### 10226

1. `cout` won't flush unless you manually do it or use endl!
2. When using cout, the precision setting must be done using `setprecision(digits)`,but this will set the *total* digits. In order to set only the floating point digits, use [fixed + setprecision](http://stackoverflow.com/questions/3923202/set-the-digits-after-decimal-point). For example: ` cout << i->first << " " << fixed << setprecision(4) << ans << '\n'; ` is equivalent to `printf("%.4f", ans);`
3. It's a better idea to use `string` type instead of `char *` for map key.
Declaration example:  `map<string, int> data;`
4. Map traversal using iterator: `for (map<string, int>::iterator i = data.begin(); i != data.end(); i++)`
5. Don't forget to use

```
ios::sync_with_stdio(false);
cin.tie(0);
```
