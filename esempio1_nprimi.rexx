
pull numero_primi
num = 3
is_prime = 1
if numero_primi >= 1 then do
	say 2
end
do iter = 2 to numero_primi+1
	iter = iter - 1
	do c = 2 to numero_primi/2
		if (num%c == 0) then do
			is_prime = 0
		end
	end
	if is_prime then do
		say num
		iter = iter + 1
	end
	is_prime = 1
	num = num + 1
end
