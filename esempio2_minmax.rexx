
pull n
if n==0 then do
    say n
end
else do
    max = n
    min = n
    do while n
        pull n
        if n<min & n then do
	    min = n
	end
	if n>max then do
	    max = n
        end
    end 
    say min
    say max
end
