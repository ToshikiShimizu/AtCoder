L, R, d = gets.split.map(&:to_i)
ans = 0
for num in L...R+1 do
    if num % d == 0
        ans += 1
    end
end
puts ans