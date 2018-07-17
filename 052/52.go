package main



import (
	"fmt"
	"math"
)



func main() {
	
	
	for i := 1; ; i++ {
		if checkDigits(i, 2 * i) {
			if checkDigits(i, 3 * i) {
				if checkDigits(i, 4 * i) {
					if checkDigits(i, 4 * i) {
						if checkDigits(i, 6 * i) {
							fmt.Println(i)
							break;
						}
					}
				}
			}
		}	
	}
	
	
	//fmt.Println(checkDigits(34243, 11111))
	
	
}



func checkDigits(a, b int) bool {
	digits := countDigits(a)
	if countDigits(b) != digits {
		return false
	}
	
	var A [20]int
	var B [20]int
	
	//disableNumber(a, digits, A)
	for i := 0; i < digits; i++ {
		A[i] = ( a % int( math.Pow(float64(10), float64(i+1) ) ) ) / int( math.Pow(float64(10), float64(i) ) )
	}
	
	for i := 0; i < digits; i++ {
		B[i] = ( b % int( math.Pow(float64(10), float64(i+1) ) ) ) / int( math.Pow(float64(10), float64(i) ) )
	}
	
	//fmt.Println(A)
	//fmt.Println(B)
	
	for i := 0; i < digits; i++ {
		for j := 0; j < digits; j++ {
			if A[i] == B[j] {
				B[j] = -1
				break
			}
		}
	}
	
	//fmt.Println(B)
	
	for i := 0; i < digits; i++ {
		if B[i] != -1 {
			return false
		}
	}
	
	return true
}




func countDigits(n int) int {
	for i := 0; ; i++ {
		if n / int( math.Pow(float64(10), float64(i)) ) == 0 {
			return i;
		}
	}
}



