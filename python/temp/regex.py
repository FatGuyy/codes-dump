r"""

    \A:         the resultant is a match if the input characters are at the beginning of the string                
    \b          the resultant is a match whether the input characters are at the beginning or the end of a word                               
    \d          the resultant is a match if the string contains any digits  
    \s           the resultant is a match if the string contains a white space character

There are many metacharacters supported by the re module. Some characters with their working are the following:

    ‘.’: Matches any single character except newline
    ‘$’: Anchors a match at the end of a string
    ‘*’: Matches zero or more repetitions
    ‘+':Matches one or more repetitions
    ‘{}’: Matches an explicitly specified number of repetitions
    ‘[]’: Specifies a character class

[] A set of characters
\ Signals a special sequence (can also be used to escape special characters)
. Any character (except newline character)
^ Starts with
$ Ends with
* Zero or more occurrences
+ One or more occurrences
{} Exactly the specified number of occurrences
| Either or
() Capture and group
Special Sequences
\A Returns a match if the specified characters are at the beginning of the string
\b Returns a match where the specified characters are at the beginning or at the end of a word r” ain\b.”
\B Returns a match where the specified characters are present, but NOT at the beginning (or at the end) of a word

\d Returns a match where the string contains digits (numbers from 0-9)
\D Returns a match where the string DOES NOT contain digits
\s Returns a match where the string contains a white space character
\S Returns a match where the string DOES NOT contain a white space character
\w Returns a match where the string contains any word characters (characters from a to Z, digits from 0-9, and the underscore _ character)
\W Returns a match where the string DOES NOT contain any word characters
\Z Returns a match if the specified characters are at the end of the string

"""

import re

str = r"""
    \A the resultant is a match if the input characters are at the beginning of the string                
    \b the resultant is a match whether the input characters are at the beginning or the end of a word                               
    \d the resultant is a match if the string contains any digits  
    \s the resultant is a match if the string contains a white space character

There are many metacharacters supported by the re module. Some characters with their working are the following:

    ‘.’: Matches any single character except newline
    ‘$’: Anchors a match at the end of a string
    ‘*’: Matches zero or more repetitions
    ‘+':Matches one or more repetitions
    ‘{}’: Matches an explicitly specified number of repetitions
    ‘[]’: Specifies a character class

[] A set of characters
\ Signals a special sequence (can also be used to escape special characters)
. Any character (except newline character)
^ Starts with
$ Ends with
* Zero or more occurrences
+ One or more occurrences
{} Exactly the specified number of occurrences
| Either or
() Capture and group
Special Sequences
\A Returns a match if the specified characters are at the beginning of the string
\b Returns a match where the specified characters are at the beginning or at the end of a word r” ain\b.”
\B Returns a match where the specified characters are present, but NOT at the beginning (or at the end) of a word

\d Returns a match where the string contains digits (numbers from 0-9)
\D Returns a match where the string DOES NOT contain digits
\s Returns a match where the string contains a white space character
\S Returns a match where the string DOES NOT contain a white space character
\w Returns a match where the string contains any word characters (characters from a to Z, digits from 0-9, and the underscore _ character)
\W Returns a match where the string DOES NOT contain any word characters
\Z Returns a match if the specified characters are at the end of the string
"""

pattern = r'\\A'

some = re.findall(pattern, str)
some2 = re.finditer(pattern, str)

for somes in some2:
    print(somes)
    