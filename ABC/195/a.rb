M, H = gets.split.map(&:to_i)

if H%M == 0
    puts 'Yes'
else
    puts 'No'
end