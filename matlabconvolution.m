f1 = [0 1 2 3 2 1];
f2 = -2 * ones(1,7);
f3 = [1 -1 1 -1];
f4 = [0 0 0 -3 -3];

n1 = 0:length(f1)-1;
n2 = 0:length(f2)-1;
n3 = 0:length(f3)-1;
n4 = 0:length(f4)-1;

figure;
subplot(2,2,1);
stem(n1, f1, 'filled');
title('f1[n]');
xlabel('n'); ylabel('Amplitude');

subplot(2,2,2);
stem(n2, f2, 'filled');
title('f2[n]');
xlabel('n'); ylabel('Amplitude');

subplot(2,2,3);
stem(n3, f3, 'filled');
title('f3[n]');
xlabel('n'); ylabel('Amplitude');

subplot(2,2,4);
stem(n4, f4, 'filled');
title('f4[n]');
xlabel('n'); ylabel('Amplitude');

y11 = conv(f1, f1);
y12 = conv(f1, f2);
y13 = conv(f1, f3);
y23 = conv(f2, f3);
y14 = conv(f1, f4);

n11 = 0:length(y11)-1;
n12 = 0:length(y12)-1;
n13 = 0:length(y13)-1;
n23 = 0:length(y23)-1;
n14 = 0:length(y14)-1;

figure;
subplot(3,2,1);
stem(n11, y11, 'filled');
title('f1 * f1');

subplot(3,2,2);
stem(n12, y12, 'filled');
title('f1 * f2');

subplot(3,2,3);
stem(n13, y13, 'filled');
title('f1 * f3');

subplot(3,2,4);
stem(n23, y23, 'filled');
title('f2 * f3');

subplot(3,2,5);
stem(n14, y14, 'filled');
title('f1 * f4');

disp('f1 * f1 ='); disp(y11);
disp('f1 * f2 ='); disp(y12);
disp('f1 * f3 ='); disp(y13);
disp('f2 * f3 ='); disp(y23);
disp('f1 * f4 ='); disp(y14);

num = [1 1.5];
den = [1 5 12 15];
roots(den)      
[r,p,k] = residue(num, den);  