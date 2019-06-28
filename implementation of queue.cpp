/* The method push to push element into the queue */
void MyQueue :: push(int x)
{
        // Your Code
        if(rear == 1001)
        {
            return;
        }else
        {
            arr[rear] = x;
            rear++;  
        }
        
}
/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code
        if(front == rear)
        {
            return -1; //empty
        }else
        {
            int temp = arr[front];
            for(int i=front; i<rear-1; i++)
            {
                arr[i]= arr[i+1];
            }
            
            rear--;
            
            return temp;
        }
}

