grammar tinyrexx;

program   : statement+ EOF;

statement : assign | print | input | w_loop | foreach | condif | a_expr_ ;

assign    : ID '=' a_expr ;
print     : 'say' a_expr ;
input     : 'pull' ID ;
w_loop    : 'do' 'while' test statement+ 'end' ;
test      : testt ;
testt     : a_expr | a_expr r_op a_expr | NOT testt | testt c_op testt | '(' testt ')';
a_expr_   : a_expr ;
a_expr    : ID | NUMBER | '(' a_expr ')' | a_expr a_op a_expr | MINUS a_expr ;
a_op      : MINUS | PLUS | MUL | DIV | MOD;
r_op      : EQUAL | LT | LEQ | GT | GEQ ;
c_op      : AND | OR ;
foreach   : 'do' range statement+ 'end' ;
range     : ID '=' a_expr tto a_expr ;
tto       : 'to' ;
condif    : 'if' test 'then' 'do' statement+ 'end' condelse ;
condelse  : 'else' 'do' statement+ 'end' | ;

MINUS     : '-' ;
PLUS      : '+' ;
MUL       : '*' ;
DIV       : '/' ;
MOD       : '%' ;
EQUAL     : '==' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
AND       : '&' ;
OR        : '|' ;
NOT       : '\\' ;
ID        : [_A-Za-z][a-zA-Z0-9_]* ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
ErrorChar : . ;
