##Fizz Buzz Variations

To practice reusing pieces of code between projects, we will be putting the
methods to display 'fizz' and 'buzz' in their own files and reusing them
between programs that implement [different variations of Fizz Buzz][fizz-buzz-variations].

Your program should use the game rules and count through 100 numbers.

###Original Fizz Buzz
 * If (n % 3 === 0) print 'fizz'.
 * If (n % 5 === 0) print 'buzz'.
 * When both of the above are true, both 'fizz' and 'buzz' are printed.
 * If neither of the previous were true, print the number.

###Base 5 Fizz Buzz
Follow the rules of Fizz Buzz, but iterate through numbers using base-5 counting.

###Fizz Buzz Woof
 * If (n % 3 === 0) print 'fizz'.
 * If there is a '3' digit in n, then also (again) print 'fizz'.
 * If (n % 5 === 0) print 'buzz'.
 * If there is a '5' digit in n, then also (again) print 'buzz'.
 * If (n % 7 === 0) print 'woof'.
 * If there is a '7' digit in n, then also (again) print 'woof'.
 * The words must always occur in the given order:
   - First any and all instances of 'fizz'
   - Next any and all instances of 'buzz'
   - Last any and all instances of 'woof'

[**Solution:** Fizz Buzz Variations][fizz-buzz-variations-solution]

[fizz-buzz-variations]: http://en.wikipedia.org/wiki/Fizz_buzz
[fizz-buzz-variations-solution]: https://github.com/LearnToCodeC/CProgrammingCurriculum/tree/master/solutions/code_organization/fizz_buzz_variations
