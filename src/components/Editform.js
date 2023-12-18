import React, {useState} from 'react'
 
export const Editform = ({Editfor,task}) => {
    const [value, setValue]=useState(task.task)
    const handleSubmit=(e)=>{
        e.preventDefault();
        Editfor(value,task.id);
    };
return (
    <form onSubmit={handleSubmit} className="TodoForm">
    <input type="text" value={value} onChange={(e) => setValue(e.target.value)} className="todo-input" placeholder='Update task' />
    <button type="submit" className='todo-btn'>Add Task</button>
  </form>
)
}