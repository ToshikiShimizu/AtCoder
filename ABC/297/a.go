package main

import (
	"fmt"
)

func main() {
	var n, d int
	fmt.Scan(&n, &d)

	clicks := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&clicks[i])
	}

	for i := 0; i < n-1; i++ {
		if clicks[i+1]-clicks[i] <= d {
			fmt.Println(clicks[i+1])
			return
		}
	}
	fmt.Println(-1)
}
