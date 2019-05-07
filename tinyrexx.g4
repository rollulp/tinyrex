grammar tinyrexx;

program   : statement+;
          
statement : assign | print | input | w_loop | foreach ;

assign    : ID '=' a_expr ;
print     : 'say' a_expr ;
input     : 'pull' ID ;
w_loop    : 'do' 'while' test statement+ 'end' ;
test      : a_expr r_op a_expr;
a_expr    : ID | NUMBER | '(' a_expr ')' | a_expr a_op a_expr | MINUS a_expr ;
a_op      : MINUS | PLUS | MUL | DIV ;
r_op      : EQUAL | LT | LEQ | GT | GEQ ;
foreach   : 'do' range statement+ 'end' ;
range     : ID '=' a_expr tto a_expr;
tto       : 'to';

MINUS     : '-' ;
PLUS      : '+' ;
MUL       : '*' ;
DIV       : '/' ;
EQUAL     : '==' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
ID        : [a-z][a-zA-Z0-9]* ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
ErrorChar : . ;
