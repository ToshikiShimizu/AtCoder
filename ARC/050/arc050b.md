---
title: ARC050B 花束
tags:
  - - Python
  - - 競技プログラミング

category:
  - - AtCoder版蟻本中級編
date: 2020-06-24 22:00:00
---

## この記事で使うアルゴリズム
**二分探索**

## はじめに

カテゴリー[AtCoder版蟻本中級編](https://kakedashi-engineer.appspot.com/categories/AtCoder%E7%89%88%E8%9F%BB%E6%9C%AC%E4%B8%AD%E7%B4%9A%E7%B7%A8/)では、[AtCoder 版！蟻本 (中級編)](https://qiita.com/drken/items/2f56925972c1d34e05d8)でまとめられている問題を`Python`で解いています。

## 問題
https://atcoder.jp/contests/arc050/tasks/arc050_b

## 方針
二分探索を用いて解くことができます。

[ABC023D 射撃王](https://kakedashi-engineer.appspot.com/2020/04/12/abc023d/)でも紹介させていただいた`meguru_bisect`を使うと、二分探索をバグりにくく実装できます。

## コード
```python
R, B = map(int,input().split())
x, y = map(int,input().split())
def is_ok(K):
    if K>R or K>B:
        return False
    if (R-K)//(x-1) + (B-K)//(y-1) >= K:
        return True
    return False

def meguru_bisect(ng, ok):
    while (abs(ok - ng) > 1):
        mid = (ok + ng) // 2
        if is_ok(mid):
            ok = mid
        else:
            ng = mid
    return ok
print (meguru_bisect(10**19,0))
```


# 記事情報
- 投稿日：2020年6月24日
- 最終更新日：2020年6月24日