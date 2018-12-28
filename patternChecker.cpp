/* 
# Implementing a Regular-Expression Searcher

For this exercise, create a simple pattern matcher (similar-to but
different-than regular expressions) that takes two arguments:

- First, the pattern
- Second, the string you want to match

If the pattern matches the string as defined below, return true.
Otherwise, return false.

## Matching Behavior

Your application should support these patterns:

- A non-special character in a pattern matches only that character.
- The special-character `.` in the pattern matches any single character.
- The special-character `?` in the pattern does not match any character, but
  indicates the following character in the pattern can match zero or one times.
- The special-character `*` in the pattern does not match any character, but
  indicates the following character in the pattern can match zero or more times.
- The special-character `+` in the pattern does not match anything, but
  indicates the following character in the pattern can match one or more times.

### Details

The pattern must match every character in the string to be considered a match -
we are only matching strings in their entirety, unlike `grep` or similar.

For example, the string `abc` matches the patterns `abc`, `...`, `a.c`, and
`a?bbc` but does _not_ match `..` or `....` (since it must match completely).

You should read the above definitions and then add appropriate test cases in
addition to those described below.

Note: Do not worry about escaping special characters (e.g., `+`).

## Testing

Here are a few test cases to get you started (though you will certainly want to
add more):
```
# exact match and simple mismatch
match "abc" "abc"
no_match "abd" "abc"

# any-char matches
match "a.c" "a.c"
match "a.c" "abc"

# an optional pattern char matches with and without
match "a?bc" "abc"
match "a?bc" "ac"

# an optional char that _can_ match is not forced to.
match "?aab" "ab"

# classic log searching
match "ERROR: *." "ERROR: file not found"
no_match "ERROR: *." "WARNING: file not found"
```


## Submitting Your Solution

Use any language you're comfortable with and feel free to consult any
documentation, StackOverflow, etc. as you normally would in your day-to-day
work.

Pick your desired language from the drop-down above, or, if it isn't supported by
CoderPad, just let us know and include instructions on how to build and run your
solution on recent-ish Linux or MacOS systems.

You can develop and run your solution right in CoderPad if you want, or work in
your preferred environment and paste your code in when you're ready -- just make
sure that it does run in CoderPad before you're done. Once you're finished, just
let us know!


Note: Since the goal is to _implement_ a form of matching, please _do not_ use
regex libraries in your solution.

*/

#include <vector>
using namespace std;

class solution{
public:
    // bool patternCheckr(char[] txt, char[] pattern){
    //     //bool map[][]
    //     //return false;
    // }
};