package smtv_test

import (
	"fmt"
	"time"
)

func Main() {
	currentTime := time.Now()
	fmt.Println("Hello, world!")
	fmt.Printf("The current date and time is: %s\n", currentTime.Format("2006-01-02 15:04:05"))
}

func foo() {
	foo()
}
