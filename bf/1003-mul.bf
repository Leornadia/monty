,>>,                                Read first digit and store
[                                    Start loop for second digit
   >>,-                              Subtract 48 from ASCII  
   <<< 
   '>'                              Store first number
   [->+>+<<]                        Set counter for multiplying
   >                                 Retrieve first number
   <<
   +
   .                                 Print result
   
   <<<<<-                            Reset tape
   
   ,                                 Read newline
   .                                 Print newline
]
