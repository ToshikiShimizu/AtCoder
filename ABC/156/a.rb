input = gets.split(" ")
N = input[0].to_i
R =  input[1].to_i
if N < 10 then
    puts 100 * (10-N) + R
else
    puts R
end