V, T, S, D = gets.split.map(&:to_i)
if T*V<= D && D <= S*V
    puts 'No'
else
    puts 'Yes'
end