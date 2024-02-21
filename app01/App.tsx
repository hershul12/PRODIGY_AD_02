import React, { useState } from "react";
import { Image, Text, TouchableOpacity, View } from "react-native";
const App = () => {
  const[add,setadd]=useState("")
  const adding = ()=>{
  }
  return (
    <View style={{flex:1}}>
      <View style={{borderWidth:1,height:"40%"}}>
      </View>
      <View style={{height:"100%",backgroundColor:'gray'}}>
        <View style={{gap:20,borderWidth:1,height:"20%",flexDirection:"row",justifyContent:'center',alignItems:'center'}}>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
            <Text style={{fontSize:50}}>1</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>2</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>3</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>+</Text>
          </TouchableOpacity>
        </View>
        <View style={{gap:20,borderWidth:1,height:"20%",flexDirection:"row",justifyContent:'center',alignItems:'center'}}>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
            <Text style={{fontSize:50}}>4</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>5</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>6</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>/</Text>
          </TouchableOpacity>
        </View>
        <View style={{gap:20,borderWidth:1,height:"20%",flexDirection:"row",justifyContent:'center',alignItems:'center'}}>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
            <Text style={{fontSize:50}}>7</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>8</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>9</Text>
          </TouchableOpacity>
          <TouchableOpacity style={{borderWidth:1,height:"50%",width:"18%",alignItems:'center'}}>
          <Text style={{fontSize:50}}>*</Text>
          </TouchableOpacity>
        </View>
      </View>
    </View>

  );
}
export default App;