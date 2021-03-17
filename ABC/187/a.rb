A, B = gets.split
sa = A.split('').map(&:to_i).sum
sb = B.split('').map(&:to_i).sum
puts [sa, sb].max