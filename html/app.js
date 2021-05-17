
// ELEMENTS
const htmlColumns = document.querySelector('.columns');

const columns = [];

const addColumn = () => {
  const columnName = prompt('Багана нэр');
  columns.push({
    name: columnName,
    tasks: []
  });
  render();
}

const addTask = (index) => {
  const task = prompt("Даалгавар оруулна уу !");  
  // columns[index].tasks = [ ...columns[index].tasks, {
  //   title: task
  // } ];
  const tmp = columns[index].tasks;
  tmp.push({ title: task });
  columns[index].tasks = tmp;
  render();
}

// const movingAnotherColumn 

const render = () => {
  let html = '';
  columns.forEach((column, i) => {
    html += `
      <div class="column">
        <h1 onClick="addTask(${i})">${column.name}</h1>
        <ul>
          ${column.tasks.map(task => (`<li>${task.title}</li>`)).join('')}
        </ul>
      </div>
    `;
  });
  console.log(html);
  htmlColumns.innerHTML = html;
}