C = gets
if (C[0]==C[1]) && (C[1]==C[2]) # C.chomp.split('').uniq.length==1
    puts 'Won'
else
    puts 'Lost'
end