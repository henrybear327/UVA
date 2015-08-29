# Notes

### 429

The key (*time-saver concept!*):

> Each word is a vertex, connect 2 words with an edge if differ by 1 letter

1. There is no possibility of going backwards, so standard BFS will work.
2. While implementing BFS, don't forget to use `visited[]`.
3. Use `visited[]` to record the steps taken!

### 924

Read the input limits carefully, think of the memory limits and constrains about
the problem before actually implementing the solution!

The problem is the first problem that I used `<vector>` to solve! Progress!

Notes:
1. Initialization must be a const., not a variable. EX: `vector<int> graph[2505];`
2. Use `graph[i].clear()` to clear the `<vector>`
3. To insert value into it, use `graph[i].push_back(i);`
4. To iterate over ```<vector>```, use either of these:
    1. ```for (vector<int>::iterator i = graph[curr].begin(); i != graph[curr].end(); i++) ```.

    _ Notice: The value of the position of the iterator is ```*i``` _

    2. ```for (int i = 0; i < (int)graph[curr].size(); i++)```
