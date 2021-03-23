n, x, t = gets.split.map(&:to_i)
#puts (n / x.to_f).ceil * t
puts n.fdiv(x).ceil * t