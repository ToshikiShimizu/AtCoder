S = gets.chomp.split('S')
mx = 0
for s in S
    mx = [mx, s.length].max
end
p mx