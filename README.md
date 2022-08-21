# 快速排序法
 **选定一个数挪到排序后的正确位置（partition）**
 
## 1.1快速排序算法原理

 **int p=partition（arr,l,r）
 返回值p是标定点对应的索引**
 QuickSort(arr,l,r)就是对arr的[l,r]部分排序
 **仍是递归函数**
   > **QuickSort(arr,l,r){
       if(l>=r) return;
       int p=partition（arr,l,r);                                                                                                       
        //对arr[l,p-1]进行排序
       QuickSort（arr,l,p-1）；
       //对arr[p+1,r]进行排序
       QuickSort(arr,p+1,r )；
        }**
 - 核心思想就是**对基本问题不断地分解**          
  -  重点问题是**如何partition**
           
    

## 1.2最基础的partition
 
**最基础的partition**
**（1）开辟临时空间left存放标定点左边的值,right存放标定点右边的值
（2）通过对left，right，以及标定点的整理得到partition处理后的结果
（3）排序过程无法原地完成，使用额外空间**

**如何原地进行partition？
（1）选定标定点v后对数组的一部分进行处理使得[l,r]区间内arr[l+1,j]<v,使得arr[j+1,i-1]>v
（2）对arr[i]位置的元素进行遍历>v则接在arr[i-1]之后，若<v则和arr[j]的元素进行交换,随后j++。
（3）最后得到的三部分分别arr[j]=v,arr[l+1,j]<v,arr[j+1,r]>v,将arr[j]与arr[l]进行互换即可完成partition的作用**

✔此方法原地完成排序，未使用额外内存空间

**循环不变量就是arr[j+1..i-1]>v,arr[l+1...j]<v**


## 1.3第一版快速排序法
**用java实现partition**
>**int j=l;
 for(int i=l+1;i<=r;i++)
 if(arr[i]compareTo(arr[l]<0){
 j++;
 swap(arr,i,j);
 }
 swap（arr,l,j）
 return j;
 }**

 **用java实现递归**
 >**if(l>=r) return;
 //递归到底层直接返回值
 int p=partition(arr,l,r);
  sort(arr,l,p-1);
 sort(arr,p+1,r);
 }**

** 在进行算法测试后QuickSort快于MergeSort,因为QuickSort在partition过程比较量比较小**
 
 
