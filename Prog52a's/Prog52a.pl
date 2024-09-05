print "Enter Length: "; $len = <STDIN>; chomp $len;
print "Enter Width: "; $wid = <STDIN>; chomp $wid;

$area = $len*$wid;
$perim = ($len*2) + ($wid*2);

print "Area: ", $area, "\n";
print "Perimeter: ", $perim, "\n";