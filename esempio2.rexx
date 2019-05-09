do a =0 to 10
    if a < 5
    then do 
        say a
    end
    else do
        b = a+4
	if (a+4 == 6) | (a+4 < 6) then do
	    say b + a
        end
    end
end
