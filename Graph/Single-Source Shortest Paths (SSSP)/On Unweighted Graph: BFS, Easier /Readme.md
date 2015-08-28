# Notes

### 429

The key (*time-saver concept!*):

> Each word is a vertex, connect 2 words with an edge if differ by 1 letter

1. There is no possibility of going backwards, so standard BFS will work.
2. While implementing BFS, don't forget to use `visited[]`.
3. Use `visited[]` to record the steps taken!
