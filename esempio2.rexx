
pull n
if n==0 then do
    say n
end
else do
    max = n
    min = n
    do while n
        pull n
        if num<min then do
	    min = n
	end
	if num>max then do
	    max = n
        end
    end 
    say min
    say max
end
